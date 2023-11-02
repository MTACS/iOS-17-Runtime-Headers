
@interface CMVO2MaxClassification : NSObject {
    struct unique_ptr<CLVO2MaxClassifier, std::default_delete<CLVO2MaxClassifier>> { 
        struct __compressed_pair<CLVO2MaxClassifier *, std::default_delete<CLVO2MaxClassifier>> { 
            struct CLVO2MaxClassifier {} *__value_; 
        } __ptr_; 
    }  fVO2MaxClassifier;
}

+ (int)CLHKBiologicalSexFromBiologicalSex:(long long)arg1;
+ (long long)biologicalSexFromCLHKBiologicalSex:(int)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)classificationDataFromStruct:(struct CLVO2MaxClassificationData { int x1; int x2; int x3; int x4; double x5; double x6; })arg1;
- (id)init;
- (void)queryAllClassificationsWithHandler:(id /* block */)arg1;
- (void)queryClassificationForBiologicalSex:(long long)arg1 age:(long long)arg2 handler:(id /* block */)arg3;
- (void)queryClassificationForBiologicalSex:(long long)arg1 age:(long long)arg2 vo2Max:(double)arg3 handler:(id /* block */)arg4;

@end
