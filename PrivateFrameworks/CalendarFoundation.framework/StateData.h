
@interface StateData : NSObject {
    NSString * _blockTitle;
    NSMutableArray * _conferenceDetails;
    NSString * _conferenceTitle;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _endRange;
    bool  _joinMethodIsBroadcast;
    NSString * _joinMethodTitle;
    NSURL * _joinMethodURL;
    NSMutableArray * _joinMethods;
    NSMutableArray * _ranges;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _startRange;
    unsigned long long  _state;
}

@property (nonatomic, retain) NSString *blockTitle;
@property (nonatomic, retain) NSMutableArray *conferenceDetails;
@property (nonatomic, retain) NSString *conferenceTitle;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } endRange;
@property (nonatomic) bool joinMethodIsBroadcast;
@property (nonatomic, retain) NSString *joinMethodTitle;
@property (nonatomic, retain) NSURL *joinMethodURL;
@property (nonatomic, retain) NSMutableArray *joinMethods;
@property (nonatomic, retain) NSMutableArray *ranges;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } startRange;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (id)blockTitle;
- (id)conferenceDetails;
- (id)conferenceTitle;
- (id)description;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })endRange;
- (id)init;
- (bool)joinMethodIsBroadcast;
- (id)joinMethodTitle;
- (id)joinMethodURL;
- (id)joinMethods;
- (id)ranges;
- (void)resetToNewSection;
- (void)setBlockTitle:(id)arg1;
- (void)setConferenceDetails:(id)arg1;
- (void)setConferenceTitle:(id)arg1;
- (void)setEndRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setJoinMethodIsBroadcast:(bool)arg1;
- (void)setJoinMethodTitle:(id)arg1;
- (void)setJoinMethodURL:(id)arg1;
- (void)setJoinMethods:(id)arg1;
- (void)setRanges:(id)arg1;
- (void)setStartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setState:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })startRange;
- (unsigned long long)state;

@end
