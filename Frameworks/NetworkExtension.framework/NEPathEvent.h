
@interface NEPathEvent : NSObject {
    NSString * _bundleID;
    long long  _type;
}

@property (readonly) NSString *bundleID;
@property (readonly) long long type;

- (void).cxx_destruct;
- (id)bundleID;
- (long long)type;

@end
