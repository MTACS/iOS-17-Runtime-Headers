
@interface ICMentionCheckResults : NSObject {
    bool  _isAllMention;
    bool  _isExplicitMention;
    bool  _isPartialMention;
    NSSet * _matchingParticipants;
    NSString * _mentionString;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeOfMention;
}

@property (nonatomic) bool isAllMention;
@property (nonatomic) bool isExplicitMention;
@property (nonatomic) bool isPartialMention;
@property (nonatomic, copy) NSSet *matchingParticipants;
@property (nonatomic, copy) NSString *mentionString;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeOfMention;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)init;
- (bool)isAllMention;
- (bool)isExplicitMention;
- (bool)isPartialMention;
- (id)matchingParticipants;
- (id)mentionString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfMention;
- (void)setIsAllMention:(bool)arg1;
- (void)setIsExplicitMention:(bool)arg1;
- (void)setIsPartialMention:(bool)arg1;
- (void)setMatchingParticipants:(id)arg1;
- (void)setMentionString:(id)arg1;
- (void)setRangeOfMention:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
