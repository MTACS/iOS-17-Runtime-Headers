
@interface NWBonjourServiceEndpoint : NWEndpoint

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *type;

+ (unsigned int)endpointType;
+ (id)endpointWithName:(id)arg1 type:(id)arg2 domain:(id)arg3;

- (id)descriptionWithIndent:(int)arg1 showFullContent:(bool)arg2;
- (id)domain;
- (id)name;
- (id)type;

@end
