
@interface INSystemAppGrouping : NSObject {
    NSArray * _iOS;
    NSString * _key;
    NSString * _macOS;
    NSArray * _watchOS;
}

@property (nonatomic, retain) NSArray *iOS;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *macOS;
@property (nonatomic, retain) NSArray *watchOS;

+ (id)groupingForKey:(id)arg1 iOS:(id)arg2 macOS:(id)arg3 watchOS:(id)arg4;

- (void).cxx_destruct;
- (id)iOS;
- (id)key;
- (id)macOS;
- (void)setIOS:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setMacOS:(id)arg1;
- (void)setWatchOS:(id)arg1;
- (id)watchOS;

@end
