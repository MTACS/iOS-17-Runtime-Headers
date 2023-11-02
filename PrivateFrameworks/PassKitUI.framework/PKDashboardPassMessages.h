
@interface PKDashboardPassMessages : NSObject <PKDashboardItem> {
    NSOrderedSet * _messages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSOrderedSet *messages;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (id)messages;
- (void)setMessages:(id)arg1;

@end
