
@interface SWProcessConfiguration : NSObject <SWProcessConfiguration> {
    bool  _shouldRunAtBackgroundPriority;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldRunAtBackgroundPriority;
@property (readonly) Class superclass;

- (id)initWithBackgroundPriority:(bool)arg1;
- (bool)shouldRunAtBackgroundPriority;

@end
