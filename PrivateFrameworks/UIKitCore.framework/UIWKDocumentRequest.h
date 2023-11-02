
@interface UIWKDocumentRequest : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _documentRect;
    long long  _flags;
    long long  _granularityCount;
    <NSCopying> * _inputElementIdentifier;
    long long  _surroundingGranularity;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } documentRect;
@property (nonatomic) long long flags;
@property (nonatomic) long long granularityCount;
@property (nonatomic, retain) <NSCopying> *inputElementIdentifier;
@property (nonatomic) long long surroundingGranularity;

- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })documentRect;
- (long long)flags;
- (long long)granularityCount;
- (id)inputElementIdentifier;
- (void)setDocumentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFlags:(long long)arg1;
- (void)setGranularityCount:(long long)arg1;
- (void)setInputElementIdentifier:(id)arg1;
- (void)setSurroundingGranularity:(long long)arg1;
- (long long)surroundingGranularity;

@end
