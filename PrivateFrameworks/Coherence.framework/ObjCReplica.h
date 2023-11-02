
@interface ObjCReplica : NSObject {
    void index;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  uuid;
}

@property (nonatomic) long long index;
@property (nonatomic, copy) NSUUID *uuid;

- (void).cxx_destruct;
- (long long)index;
- (id)init;
- (id)initWithUuid:(id)arg1 index:(long long)arg2;
- (void)setIndex:(long long)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
