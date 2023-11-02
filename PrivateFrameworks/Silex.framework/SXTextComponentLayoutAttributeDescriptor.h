
@interface SXTextComponentLayoutAttributeDescriptor : SXComponentLayoutAttributeDescriptor {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    SXTextExclusionPath * _resultingExclusionPath;
}

- (void).cxx_destruct;

@end
