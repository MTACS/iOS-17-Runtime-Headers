
@interface CRPersonalizationElement : NSObject {
    id  _data;
    NSString * _elementId;
    id  _param;
    id /* block */  _personalizationMeasurementCreator;
    id /* block */  _personalizationResponseParser;
}

@property (nonatomic, retain) id data;
@property (nonatomic, copy) NSString *elementId;
@property (nonatomic, retain) id param;
@property (nonatomic, copy) id /* block */ personalizationMeasurementCreator;
@property (nonatomic, copy) id /* block */ personalizationResponseParser;

- (void).cxx_destruct;
- (id)data;
- (id)elementId;
- (id)init;
- (id)initWithID:(id)arg1 param:(id)arg2 requestFunction:(id /* block */)arg3 responseFunction:(id /* block */)arg4;
- (id)param;
- (id /* block */)personalizationMeasurementCreator;
- (id /* block */)personalizationResponseParser;
- (void)setData:(id)arg1;
- (void)setElementId:(id)arg1;
- (void)setParam:(id)arg1;
- (void)setPersonalizationMeasurementCreator:(id /* block */)arg1;
- (void)setPersonalizationResponseParser:(id /* block */)arg1;

@end
