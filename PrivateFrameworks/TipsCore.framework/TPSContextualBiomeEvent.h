
@interface TPSContextualBiomeEvent : TPSContextualEvent {
    NSDictionary * _filterInfo;
    NSString * _stream;
}

@property (nonatomic, readonly, copy) id /* block */ filterHandler;
@property (nonatomic, copy) NSDictionary *filterInfo;
@property (nonatomic, copy) NSString *stream;

+ (id)observationDateFromEvent:(id)arg1;
+ (id)streamFromDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)filterHandler;
- (id)filterInfo;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)publisherFromStartTime:(double)arg1;
- (void)setFilterInfo:(id)arg1;
- (void)setStream:(id)arg1;
- (id)stream;

@end
