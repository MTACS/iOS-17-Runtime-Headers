
@interface TPSContextualDuetEventBookmark : TPSContextualEventBookmark {
    NSDictionary * _observationMap;
}

@property (nonatomic, copy) NSDictionary *observationMap;

+ (id)bookmarkWithObservationMap:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)observationMap;
- (void)setObservationMap:(id)arg1;

@end
