
@interface SIRINLURRGroupIdentifier : NSObject <NSSecureCoding> {
    NSString * _groupId;
    int  _seq;
}

@property (nonatomic, retain) NSString *groupId;
@property int seq;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupId;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupId:(id)arg1 seq:(int)arg2;
- (int)seq;
- (void)setGroupId:(id)arg1;
- (void)setSeq:(int)arg1;

@end
