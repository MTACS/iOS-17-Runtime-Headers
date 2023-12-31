
@interface STUpdateWatchListRequest : AFSiriRequest {
    NSArray * _contentIdentifiersToAdd;
    NSArray * _contentIdentifiersToRemove;
}

@property (setter=_setContentIdentifiersToAdd:, nonatomic, copy) NSArray *contentIdentifiersToAdd;
@property (setter=_setContentIdentifiersToRemove:, nonatomic, copy) NSArray *contentIdentifiersToRemove;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setContentIdentifiersToAdd:(id)arg1;
- (void)_setContentIdentifiersToRemove:(id)arg1;
- (id)contentIdentifiersToAdd;
- (id)contentIdentifiersToRemove;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
