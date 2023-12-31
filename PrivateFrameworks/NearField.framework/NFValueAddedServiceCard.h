
@interface NFValueAddedServiceCard : NSObject <NSSecureCoding> {
    NSData * _data;
    NSData * _identifier;
    NSData * _token;
    int  _type;
    bool  _userInterventionRequired;
}

@property (retain) NSData *data;
@property (nonatomic, retain) NSData *identifier;
@property (retain) NSData *token;
@property int type;
@property bool userInterventionRequired;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asDictionary;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (void)setData:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUserInterventionRequired:(bool)arg1;
- (id)token;
- (int)type;
- (bool)userInterventionRequired;

@end
