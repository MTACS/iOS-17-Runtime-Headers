
@interface EKUILocationRowModel : NSObject {
    UITableViewCell * _cell;
    EKVirtualConference * _conference;
    EKStructuredLocation * _location;
    unsigned long long  _locationType;
}

@property (nonatomic, retain) UITableViewCell *cell;
@property (nonatomic, retain) EKVirtualConference *conference;
@property (nonatomic, retain) EKStructuredLocation *location;
@property (nonatomic) unsigned long long locationType;

- (void).cxx_destruct;
- (id)cell;
- (id)conference;
- (id)description;
- (id)initWithConferenceRoom:(id)arg1;
- (id)initWithPendingConference:(id)arg1;
- (id)initWithStructuredLocation:(id)arg1;
- (id)initWithSuggestedLocation:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 location:(id)arg2 conference:(id)arg3;
- (id)initWithVirtualConference:(id)arg1;
- (id)location;
- (unsigned long long)locationType;
- (void)setCell:(id)arg1;
- (void)setConference:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationType:(unsigned long long)arg1;

@end
