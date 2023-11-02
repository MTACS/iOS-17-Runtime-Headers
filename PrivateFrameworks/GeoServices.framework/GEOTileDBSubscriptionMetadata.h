
@interface GEOTileDBSubscriptionMetadata : NSObject {
    NSArray * _dataStates;
    long long  _downloadState;
}

@property (nonatomic, readonly) long long downloadState;

- (void).cxx_destruct;
- (long long)downloadState;
- (id)initWithDataStates:(id)arg1 downloadState:(long long)arg2;
- (bool)isFullyLoadedForDataType:(unsigned int)arg1 dataSubtype:(unsigned int)arg2 version:(unsigned long long)arg3 associatedDataCount:(unsigned long long*)arg4 associatedDataSize:(unsigned long long*)arg5;

@end
