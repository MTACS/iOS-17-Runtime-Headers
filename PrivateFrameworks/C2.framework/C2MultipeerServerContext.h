
@interface C2MultipeerServerContext : NSObject {
    NSData * _chunkData;
    NSObject<OS_os_activity> * _osActivity;
}

@property (nonatomic, retain) NSData *chunkData;
@property (nonatomic, retain) NSObject<OS_os_activity> *osActivity;

- (void).cxx_destruct;
- (id)chunkData;
- (id)init;
- (id)osActivity;
- (void)setChunkData:(id)arg1;
- (void)setOsActivity:(id)arg1;

@end
