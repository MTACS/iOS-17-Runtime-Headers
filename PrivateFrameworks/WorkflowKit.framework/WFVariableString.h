
@interface WFVariableString : NSObject <NSCopying, WFVariableSerialization> {
    NSArray * _stringsAndVariables;
}

@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *stringByRemovingVariables;
@property (nonatomic, readonly) NSString *stringByReplacingVariablesWithNames;
@property (nonatomic, readonly) NSArray *stringsAndVariables;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *variables;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void).cxx_destruct;
- (void)addVariableDelegate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAttachmentCharacterString:(id)arg1 variableGetter:(id /* block */)arg2;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithString:(id)arg1;
- (id)initWithStringsAndVariables:(id)arg1;
- (id)initWithVariable:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (void)processIntoContentItemsWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processIntoStringsAndAttachmentsWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeVariableDelegate:(id)arg1;
- (bool)representsSingleContentVariable;
- (id)serializedRepresentation;
- (id)stringByRemovingVariables;
- (id)stringByReplacingVariablesWithNames;
- (id)stringsAndVariables;
- (id)variables;
- (id)variablesOfType:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

+ (id)attributedStringWithVariable:(id)arg1;

- (id)attributedString;
- (id)attributedStringByAddingTypingAttributes:(id)arg1;
- (id)initWithAttributedString:(id)arg1;
- (id)stringByReplacingCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withVariable:(id)arg2;
- (id)stringByReplacingCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withVariableString:(id)arg2;
- (id)substringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
