
@interface VNAsyncStatus : NSObject <NSCopying> {
    bool  _completed;
    NSError * _error;
}

@property (nonatomic, readonly) bool completed;
@property (nonatomic, readonly) NSError *error;

- (void).cxx_destruct;
- (bool)completed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)error;
- (id)init;
- (id)initWithStatus:(bool)arg1 error:(id)arg2;

@end
