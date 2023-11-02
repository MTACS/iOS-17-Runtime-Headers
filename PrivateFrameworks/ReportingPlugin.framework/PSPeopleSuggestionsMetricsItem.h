
@interface PSPeopleSuggestionsMetricsItem : NSObject {
    _PSPeopleSuggestionsMetricsItemInternal * _underlyingObject;
}

@property (readonly) _PSPeopleSuggestionsMetricsItemInternal *underlyingObject;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithId:(id)arg1 model:(id)arg2 transportBundleId:(id)arg3 rank:(unsigned char)arg4 score:(double)arg5;
- (id)initWithId:(id)arg1 modelIdentifier:(id)arg2 transportBundleId:(id)arg3 rank:(unsigned char)arg4 score:(double)arg5;
- (bool)isEqual:(id)arg1;
- (id)underlyingObject;

@end
