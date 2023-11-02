
@interface TCDumpBinaryToXmlState : NSObject {
    NSString * mCurrentFieldName;
    NSMutableDictionary * mFieldNameToValueMap;
}

- (void).cxx_destruct;
- (void)cacheValueforCurrentField:(id)arg1;
- (id)init;
- (void)setCurrentField:(id)arg1;
- (id)valueForCurrentField;
- (id)valueForField:(id)arg1;

@end
