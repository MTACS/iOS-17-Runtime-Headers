
@interface BDSBookWidgetReadingHistoryData : NSObject <NSCopying, NSSecureCoding> {
    bool  _readingGoalsEnabled;
    BDSReadingHistoryStateInfo * _stateInfo;
}

@property (nonatomic) bool readingGoalsEnabled;
@property (nonatomic, retain) BDSReadingHistoryStateInfo *stateInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStateInfo:(id)arg1 readingGoalsEnabled:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)readingGoalsEnabled;
- (void)setReadingGoalsEnabled:(bool)arg1;
- (void)setStateInfo:(id)arg1;
- (id)stateInfo;

@end
