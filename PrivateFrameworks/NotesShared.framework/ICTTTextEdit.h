
@interface ICTTTextEdit : NSObject <NSCopying> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSUUID * _replicaID;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly, copy) NSUUID *replicaID;
@property (nonatomic, readonly, copy) NSDate *timestamp;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithNote:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithTimestamp:(id)arg1 replicaID:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)isEqual:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)replicaID;
- (id)timestamp;

@end
