
@interface PHASEExternalStreamCollection : NSObject {
    unsigned long long  _streamCount;
    long long  _streamType;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) unsigned long long streamCount;
@property (nonatomic, readonly) long long streamType;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStreamType:(long long)arg1 count:(unsigned long long)arg2;
- (unsigned long long)streamCount;
- (long long)streamType;
- (id)uuid;

@end
