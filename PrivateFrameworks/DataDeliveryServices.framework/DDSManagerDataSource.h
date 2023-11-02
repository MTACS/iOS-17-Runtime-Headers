
@interface DDSManagerDataSource : NSObject <DDSManagerDataSource>

@property (readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)date;
- (id)dateForPreferenceKey:(id)arg1;
- (void)setDate:(id)arg1 forPreferenceKey:(id)arg2;

@end
