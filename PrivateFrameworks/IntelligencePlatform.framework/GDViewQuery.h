
@interface GDViewQuery : NSObject <NSSecureCoding> {
    bool  _includeDependencies;
    NSArray * _names;
    NSString * _schedule;
}

@property (nonatomic, readonly) bool includeDependencies;
@property (nonatomic, readonly) NSArray *names;
@property (nonatomic, readonly) NSString *schedule;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeDependencies;
- (id)initWithAll;
- (id)initWithCoder:(id)arg1;
- (id)initWithNames:(id)arg1 includeDependencies:(bool)arg2;
- (id)initWithSchedule:(id)arg1 includeDependencies:(bool)arg2;
- (id)names;
- (id)schedule;

@end
