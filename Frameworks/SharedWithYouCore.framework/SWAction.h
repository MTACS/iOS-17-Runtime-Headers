
@interface SWAction : NSObject <NSCopying, NSSecureCoding> {
    bool  _complete;
    BSAction * _destinationBSAction;
    bool  _hasSentResponse;
    _SWActionResponse * _response;
    <_SWActionResponseHandler> * _responseHandler;
    id /* block */  _responseHandlerBlock;
    BSAction * _sourceBSAction;
    NSUUID * _uuid;
}

@property (getter=isComplete, nonatomic) bool complete;
@property (nonatomic, readonly) BSAction *destinationBSAction;
@property (nonatomic) bool hasSentResponse;
@property (nonatomic, retain) _SWActionResponse *response;
@property (nonatomic) <_SWActionResponseHandler> *responseHandler;
@property (nonatomic, copy) id /* block */ responseHandlerBlock;
@property (nonatomic, readonly) BSAction *sourceBSAction;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)actionWithDestinationAction:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_processResponse;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destinationBSAction;
- (void)encodeWithBSActionSettings:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fail;
- (void)failWithResponse:(id)arg1;
- (void)fulfill;
- (void)fulfillWithResponse:(id)arg1;
- (bool)hasSentResponse;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinationAction:(id)arg1;
- (bool)isComplete;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAction:(id)arg1;
- (id)response;
- (id)responseHandler;
- (id /* block */)responseHandlerBlock;
- (void)setComplete:(bool)arg1;
- (void)setHasSentResponse:(bool)arg1;
- (void)setResponse:(id)arg1;
- (void)setResponseHandler:(id)arg1;
- (void)setResponseHandlerBlock:(id /* block */)arg1;
- (void)setUuid:(id)arg1;
- (id)sourceBSAction;
- (id)uuid;

@end
