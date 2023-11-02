
@interface PLThumbnailMigratorWorkItem : NSObject {
    PLManagedAsset * _asset;
    unsigned long long  _destinationThumbnailIndex;
    NSString * _masterThumbFilePath;
    bool  _succeeded;
    NSString * _uuid;
}

@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic) unsigned long long destinationThumbnailIndex;
@property (nonatomic, copy) NSString *masterThumbFilePath;
@property (nonatomic) bool succeeded;
@property (nonatomic, copy) NSString *uuid;

- (void).cxx_destruct;
- (id)asset;
- (unsigned long long)destinationThumbnailIndex;
- (id)masterThumbFilePath;
- (void)setAsset:(id)arg1;
- (void)setDestinationThumbnailIndex:(unsigned long long)arg1;
- (void)setMasterThumbFilePath:(id)arg1;
- (void)setSucceeded:(bool)arg1;
- (void)setUuid:(id)arg1;
- (bool)succeeded;
- (id)uuid;

@end
