
@interface SportsKit.SportingEventVersion : NSObject {
    void major;
    void minor;
    void patch;
}

@property (nonatomic, readonly) NSString *stringValue;

- (id)stringValue;

@end
