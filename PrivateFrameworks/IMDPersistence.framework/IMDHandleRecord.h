
@interface IMDHandleRecord : IMDRecord <IMDBridgedRecord>

@property (nonatomic, readonly, copy) NSString *ID;
@property (nonatomic, readonly, copy) NSString *canonicalizedURIString;
@property (nonatomic, readonly, copy) NSString *country;
@property (nonatomic, readonly, copy) NSString *countryCodeString;
@property (nonatomic, readonly, copy) NSString *personCentricID;
@property (nonatomic, readonly) long long rowID;
@property (nonatomic, readonly, copy) NSString *service;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (nonatomic, readonly, copy) NSString *uncanonicalizedID;
@property (nonatomic, readonly, copy) NSString *uncanonicalizedURIString;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (unsigned long long)_cfTypeID;
- (void*)_fetchUpdatedRecord;
- (struct __CFArray { }*)_localCache;
- (struct { char *x1; long long x2; struct { /* ? */ } *x3; unsigned int x4; void *x5; })_propertyDescriptorForProperty:(long long)arg1;
- (int)_propertyIDForProperty:(long long)arg1;
- (id)canonicalizedURIString;
- (struct _IMDHandleRecordStruct { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; long long x2; struct __CFArray {} *x3; }*)cfHandleRecord;
- (id)countryCodeString;
- (id)init;
- (long long)rowID;
- (id)serviceName;
- (id)uncanonicalizedURIString;

@end
