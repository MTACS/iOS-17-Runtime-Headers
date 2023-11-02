
@interface DRRequestStateStats : DRSRequestStats

@property (nonatomic, readonly) NSString *requestState;

+ (id)descriptionStringForRequest:(id)arg1;
+ (id)keyName;

- (id)requestState;

@end
