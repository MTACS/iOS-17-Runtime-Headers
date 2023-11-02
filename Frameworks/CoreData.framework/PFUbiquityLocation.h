
@interface PFUbiquityLocation : NSObject <NSCopying> {
    NSString * _exportingPeerID;
    NSString * _filename;
    unsigned long long  _hash;
    bool  _isDirectory;
    bool  _isRootUbiquitous;
    NSString * _modelVersionHash;
    NSArray * _otherPathComponents;
    NSString * _storeName;
    int  _ubiquityLocationType;
    PFUbiquityLocation * _ubiquityRootLocation;
    NSString * _ubiquityRootLocationPath;
}

@property (nonatomic, readonly) unsigned long long hash;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToURL:(id)arg1;
- (void)setExportingPeerID:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setHash:(unsigned long long)arg1;
- (void)setIsRootUbiquitous:(bool)arg1;
- (void)setModelVersionHash:(id)arg1;
- (void)setOtherPathComponents:(id)arg1;
- (void)setStoreName:(id)arg1;
- (void)setUbiquityLocationType:(int)arg1;
- (void)setUbiquityRootLocation:(id)arg1;
- (void)setUbiquityRootLocationPath:(id)arg1;

@end
