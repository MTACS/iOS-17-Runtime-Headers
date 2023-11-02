
@interface PGFrequentLocationQuestionFactory : PGSurveyQuestionFactory {
    PHFetchResult * _existingFrequentLocationQuestions;
}

@property (nonatomic, retain) PHFetchResult *existingFrequentLocationQuestions;

- (void).cxx_destruct;
- (bool)_addIfNeededFrequentLocationQuestionForAsset:(id)arg1 withLocationTypeName:(id)arg2 toQuestions:(id)arg3;
- (bool)_distanceTooCloseBetweenCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 otherCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (id)_selectedAssetFromMomentNodes:(id)arg1 closeToCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (id)existingFrequentLocationQuestions;
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(id /* block */)arg2;
- (long long)questionOptions;
- (unsigned short)questionType;
- (void)setExistingFrequentLocationQuestions:(id)arg1;

@end
