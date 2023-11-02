
@interface PRXFlowConfiguration : NSObject {
    bool  _supportsDarkMode;
}

@property (nonatomic) bool supportsDarkMode;

+ (id)defaultConfiguration;

- (void)setSupportsDarkMode:(bool)arg1;
- (bool)supportsDarkMode;

@end
