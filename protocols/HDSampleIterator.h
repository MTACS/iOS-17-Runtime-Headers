
@protocol HDSampleIterator <HKIterator>

@required

- (long long)objectID;
- (HKSample *)sample;

@end
