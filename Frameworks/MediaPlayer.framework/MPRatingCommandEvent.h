
@interface MPRatingCommandEvent : MPRemoteCommandEvent {
    float  _rating;
}

@property (nonatomic, readonly) float rating;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (float)rating;

@end
