
@interface VKLabelExternalIconElement : NSObject <NSSecureCoding> {
    struct LabelExternalIconElement { 
        struct Matrix<float, 2, 1> { 
            float _e[2]; 
        } size; 
        struct Matrix<float, 2, 1> { 
            float _e[2]; 
        } anchorPoint; 
        bool isRound; 
        unsigned char minZoom; 
    }  _element;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (const void*)element;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIconElement:(const void*)arg1;

@end
