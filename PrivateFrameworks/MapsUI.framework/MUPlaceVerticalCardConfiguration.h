
@interface MUPlaceVerticalCardConfiguration : NSObject {
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _bottomSeparatorInset;
    bool  _showSeparators;
}

@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } bottomSeparatorInset;
@property (nonatomic) bool showSeparators;

+ (id)plainConfiguration;
+ (id)separatorConfiguration;

- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })bottomSeparatorInset;
- (void)setBottomSeparatorInset:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShowSeparators:(bool)arg1;
- (bool)showSeparators;

@end
