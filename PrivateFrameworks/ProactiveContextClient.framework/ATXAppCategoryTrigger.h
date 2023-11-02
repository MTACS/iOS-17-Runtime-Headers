
@interface ATXAppCategoryTrigger : NSObject <ATXTrigger> {
    long long  _iTunesCategoryId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long iTunesCategoryId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (long long)iTunesCategoryId;
- (id)initWithCoder:(id)arg1;
- (id)initWithiTunesCategoryId:(unsigned long long)arg1;
- (long long)type;

@end
