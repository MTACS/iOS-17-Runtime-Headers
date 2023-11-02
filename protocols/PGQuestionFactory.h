
@protocol PGQuestionFactory <NSObject>

@required

- (NSArray *)generateQuestionsWithLimit:(void *)arg1 progressBlock:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, bool*, void*
- (id)init;
- (id)initWithWorkingContext:(PGManagerWorkingContext *)arg1 questionVersion:(short)arg2;
- (long long)questionOptions;
- (unsigned short)questionType;

@end
