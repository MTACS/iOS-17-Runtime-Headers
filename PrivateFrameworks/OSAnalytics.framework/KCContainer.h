
@interface KCContainer : NSObject {
    NSMutableDictionary * _data;
    int  _invalid_images;
    int  _pid;
    unsigned long long  _tag;
    NSMutableDictionary * _truncated_threads;
    unsigned int  _type;
    int  _unindexed_frames;
}

@property (nonatomic, readonly) NSMutableDictionary *data;
@property (nonatomic) int invalid_images;
@property (nonatomic) int pid;
@property (nonatomic, readonly) unsigned long long tag;
@property (nonatomic, readonly) NSMutableDictionary *truncated_threads;
@property (nonatomic, readonly) unsigned int type;
@property (nonatomic) int unindexed_frames;

- (void).cxx_destruct;
- (id)data;
- (id)initWithKCData:(struct kcdata_iter { struct kcdata_item {} *x1; void *x2; })arg1;
- (int)invalid_images;
- (void)omit;
- (int)pid;
- (void)setInvalid_images:(int)arg1;
- (void)setPid:(int)arg1;
- (void)setUnindexed_frames:(int)arg1;
- (unsigned long long)tag;
- (id)truncated_threads;
- (unsigned int)type;
- (int)unindexed_frames;

@end
