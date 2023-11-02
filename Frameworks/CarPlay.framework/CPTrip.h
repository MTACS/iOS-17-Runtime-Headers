
@interface CPTrip : NSObject <NSSecureCoding> {
    MKMapItem * _destination;
    NSUUID * _identifier;
    MKMapItem * _origin;
    NSArray * _routeChoices;
    id  _userInfo;
}

@property (nonatomic, readonly) MKMapItem *destination;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, readonly) MKMapItem *origin;
@property (nonatomic, readonly, copy) NSArray *routeChoices;
@property (nonatomic, retain) id userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrigin:(id)arg1 destination:(id)arg2 routeChoices:(id)arg3;
- (id)origin;
- (id)routeChoices;
- (void)setIdentifier:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
