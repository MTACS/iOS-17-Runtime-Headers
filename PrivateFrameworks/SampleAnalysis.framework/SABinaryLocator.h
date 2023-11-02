
@interface SABinaryLocator : NSObject {
    NSString * _buildNumber;
    bool  _dirty;
    bool  _enabled;
    NSMutableDictionary * _mappings;
}

+ (id)sharedBinaryLocator;

- (void).cxx_destruct;
- (oneway void)done;
- (id)init;

@end
