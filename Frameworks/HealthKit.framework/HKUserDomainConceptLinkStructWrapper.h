
@interface HKUserDomainConceptLinkStructWrapper : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  value;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSUUID *target;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)description;
- (long long)hash;
- (id)init;
- (id)initWithLink:(id)arg1;
- (id)initWithTarget:(id)arg1 type:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)target;
- (long long)type;

@end
