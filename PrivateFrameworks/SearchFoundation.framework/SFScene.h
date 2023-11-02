
@interface SFScene : NSObject <NSCopying, NSSecureCoding, SFScene> {
    struct { 
        unsigned int sceneIdentifier : 1; 
        unsigned int sceneType : 1; 
    }  _has;
    unsigned long long  _sceneIdentifier;
    int  _sceneType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long sceneIdentifier;
@property (nonatomic) int sceneType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSceneIdentifier;
- (bool)hasSceneType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)sceneIdentifier;
- (int)sceneType;
- (void)setSceneIdentifier:(unsigned long long)arg1;
- (void)setSceneType:(int)arg1;

@end
