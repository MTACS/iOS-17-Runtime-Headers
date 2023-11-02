
@interface PPEventNameRecord : NSObject <NSSecureCoding> {
    unsigned char  _changeType;
    NSString * _eventIdentifier;
    NSString * _identifier;
    NSString * _location;
    NSArray * _participantNames;
    double  _score;
    NSString * _title;
}

@property (nonatomic) unsigned char changeType;
@property (nonatomic, retain) NSString *eventIdentifier;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *location;
@property (nonatomic, retain) NSArray *participantNames;
@property (nonatomic) double score;
@property (nonatomic, retain) NSString *title;

+ (id)describeChangeType:(unsigned char)arg1;
+ (id)eventNameRecordWithScore:(double)arg1 eventIdentifier:(id)arg2 changeType:(unsigned char)arg3 title:(id)arg4 location:(id)arg5 participantNames:(id)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned char)changeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventIdentifier;
- (bool)hasScoreSimilarToRecord:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 score:(double)arg2 eventIdentifier:(id)arg3 changeType:(unsigned char)arg4 title:(id)arg5 location:(id)arg6 participantNames:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEventNameRecord:(id)arg1;
- (id)location;
- (id)participantNames;
- (double)score;
- (void)setChangeType:(unsigned char)arg1;
- (void)setEventIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setParticipantNames:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
