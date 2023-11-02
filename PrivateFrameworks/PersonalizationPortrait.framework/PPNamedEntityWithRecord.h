
@interface PPNamedEntityWithRecord : PPNamedEntity {
    PPNamedEntityRecord * _mostRelevantRecord;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithName:(id)arg1 category:(unsigned long long)arg2 dynamicCategory:(id)arg3 language:(id)arg4 mostRelevantRecord:(id)arg5;
- (id)mostRelevantRecord;
- (double)sentimentScore;

@end
