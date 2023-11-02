
@interface WebScriptObjectPrivate : NSObject {
    void * imp;
    bool  isCreatedByDOMWrapper;
    void * originRootObject;
    void * rootObject;
}

@end
