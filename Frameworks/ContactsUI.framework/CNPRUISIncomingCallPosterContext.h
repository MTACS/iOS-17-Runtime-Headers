
@interface CNPRUISIncomingCallPosterContext : NSObject {
    PRUISIncomingCallPosterContext * _wrappedIncomingCallPosterContext;
}

@property (nonatomic, readonly, copy) NSString *preferredTitleString;
@property (nonatomic, readonly, copy) NSString *titleString;
@property (nonatomic, readonly, copy) PRUISIncomingCallPosterContext *wrappedIncomingCallPosterContext;

+ (id)emptyContext;

- (void).cxx_destruct;
- (id)initWithContact:(id)arg1 showName:(bool)arg2;
- (id)initWithNameVariations:(id)arg1 preferredNameStyle:(unsigned long long)arg2 horizontalTitleBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 verticalTitleBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 imageAssetID:(id)arg5 personalPoster:(bool)arg6;
- (id)preferredTitleString;
- (id)titleString;
- (id)wrappedIncomingCallPosterContext;

@end
