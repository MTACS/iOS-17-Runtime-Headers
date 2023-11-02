
@interface _LSJournalledNotification : NSObject <NSSecureCoding> {
    NSArray * _bundleIDs;
    bool  _includePlugins;
    int  _notification;
    NSDictionary * _options;
}

@property (nonatomic, readonly) NSArray *bundleIDs;
@property (nonatomic, readonly) bool includePlugins;
@property (nonatomic, readonly) int notification;
@property (nonatomic, readonly) NSDictionary *options;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIDs;
- (void)encodeWithCoder:(id)arg1;
- (bool)includePlugins;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotification:(int)arg1 bundleIDs:(id)arg2 plugins:(bool)arg3 options:(id)arg4;
- (int)notification;
- (id)options;

@end
