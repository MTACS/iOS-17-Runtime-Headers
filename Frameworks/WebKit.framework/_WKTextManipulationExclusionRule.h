
@interface _WKTextManipulationExclusionRule : NSObject {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _attributeName;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _attributeValue;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _className;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _elementName;
    bool  _isExclusion;
}

@property (nonatomic, readonly) NSString *attributeName;
@property (nonatomic, readonly) NSString *attributeValue;
@property (nonatomic, readonly) NSString *className;
@property (nonatomic, readonly) NSString *elementName;
@property (nonatomic, readonly) bool isExclusion;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)attributeName;
- (id)attributeValue;
- (id)className;
- (id)elementName;
- (id)initExclusion:(bool)arg1 forAttribute:(id)arg2 value:(id)arg3;
- (id)initExclusion:(bool)arg1 forClass:(id)arg2;
- (id)initExclusion:(bool)arg1 forElement:(id)arg2;
- (bool)isExclusion;

@end
