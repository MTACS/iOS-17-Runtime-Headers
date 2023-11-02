
@interface NCDigestInfo : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    long long  _deliveryOrder;
    NSString * _headerString;
    NSDate * _scheduleDate;
    NSDateComponents * _scheduleTime;
    NSString * _titleString;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) long long deliveryOrder;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *headerString;
@property (nonatomic, readonly, copy) NSDate *scheduleDate;
@property (nonatomic, readonly, copy) NSDateComponents *scheduleTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *titleString;

- (void).cxx_destruct;
- (id)_stringForDeliveryOrder:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (long long)deliveryOrder;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)headerString;
- (id)initWithDigestInfo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)scheduleDate;
- (id)scheduleTime;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)titleString;

@end
