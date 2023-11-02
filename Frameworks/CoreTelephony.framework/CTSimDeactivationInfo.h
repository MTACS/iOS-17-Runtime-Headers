
@interface CTSimDeactivationInfo : NSObject <IDSCTSimDeactivationInfo, NSSecureCoding> {
    NSMutableArray * _events;
    NSString * _homePlmn;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *events;
@property (nonatomic, retain) NSMutableArray *events;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *homePlmn;
@property (nonatomic, readonly) NSString *homePlmn;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)events;
- (id)homePlmn;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)setHomePlmn:(id)arg1;

@end
