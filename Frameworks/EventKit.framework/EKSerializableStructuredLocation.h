
@interface EKSerializableStructuredLocation : EKSerializableObject {
    CalLocation * _calLocation;
}

@property (nonatomic, copy) CalLocation *calLocation;

+ (id)classesForKey;

- (void).cxx_destruct;
- (id)calLocation;
- (id)createStructuredLocation;
- (id)initWithStructuredLocation:(id)arg1;
- (void)setCalLocation:(id)arg1;

@end
