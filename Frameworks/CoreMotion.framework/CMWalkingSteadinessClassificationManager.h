
@interface CMWalkingSteadinessClassificationManager : NSObject

+ (id)classificationDataFromStruct:(struct CLWalkingSteadinessClassificationData { double x1; double x2; double x3; int x4; })arg1;
+ (bool)classificationForScore:(double)arg1 classification:(long long*)arg2;
+ (bool)isWalkingSteadinessAvailable;
+ (int)mapClassificationTypeFromFrameworkToClassifier:(long long)arg1;
+ (double)maximumScoreForClassification:(long long)arg1;
+ (double)minimumScoreForClassification:(long long)arg1;

@end
