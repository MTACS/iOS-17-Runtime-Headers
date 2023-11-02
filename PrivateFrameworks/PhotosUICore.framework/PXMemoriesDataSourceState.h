
@interface PXMemoriesDataSourceState : NSObject <NSCopying> {
    NSDictionary * _infosByMemory;
    PHFetchResult * _memories;
}

@property (nonatomic, readonly) NSDictionary *infosByMemory;
@property (nonatomic, readonly) PHFetchResult *memories;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)infosByMemory;
- (id)initWithMemories:(id)arg1 infosByMemory:(id)arg2;
- (id)memories;
- (id)stateUpdatedWithChange:(id)arg1 outMemoriesChangeDetails:(out id*)arg2;

@end
