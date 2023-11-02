
@interface _PUPassiveContentContextDataSource : NSObject {
    NSString * _context;
    NSArray * _suggestions;
}

@property (nonatomic, retain) NSString *context;
@property (nonatomic, readonly) NSArray *suggestions;

- (void).cxx_destruct;
- (id)context;
- (id)initWithContext:(id)arg1 suggestions:(id)arg2;
- (void)setContext:(id)arg1;
- (id)suggestions;

@end
