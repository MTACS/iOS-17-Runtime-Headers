
@interface MTRWriteParams : NSObject <NSCopying> {
    NSNumber * _dataVersion;
    NSNumber * _timedWriteTimeout;
}

@property (nonatomic, copy) NSNumber *dataVersion;
@property (nonatomic, copy) NSNumber *timedWriteTimeout;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataVersion;
- (id)init;
- (void)setDataVersion:(id)arg1;
- (void)setTimedWriteTimeout:(id)arg1;
- (id)timedWriteTimeout;

@end
