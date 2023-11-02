
@interface ContentImage : INObject

@property (nonatomic, copy) NSString *format;
@property (nonatomic, retain) NSNumber *height;
@property (nonatomic, copy) NSString *templateUrl;
@property (nonatomic) long long type;
@property (nonatomic, retain) NSNumber *width;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
